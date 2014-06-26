// Copyright 2014 Goodow.com. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//
//  GDCBus.h
//  GDChannel
//
//  Created by Larry Tin.
//

#import "GDCState.h"

@protocol GDCMessage;
@protocol GDCRegistration;

#define GDC_BUS_ON_OPEN @"@realtime/bus/onOpen"
#define GDC_BUS_ON_CLOSE @"@realtime/bus/onClose"
#define GDC_BUS_ON_ERROR @"@realtime/bus/onError"

typedef void (^GDCMessageHandler)(id<GDCMessage> message);

/**
 * A distributed lightweight event bus which can encompass multiple machines. The event bus
 * implements publish/subscribe, point to point messaging and request-response messaging.<p>
 * Messages sent over the event bus are represented by instances of the {@link Message} class.<p>
 * For publish/subscribe, messages can be published to a topic using one of the {@link #publish}
 * methods. A topic is a simple {@code String} instance.<p>
 * Handlers are registered against a topic. There can be multiple handlers registered against
 * each topic, and a particular handler can be registered against multiple topics. The event
 * bus will route a sent message to all handlers which are registered against that topic.<p>
 * For point to point messaging, messages can be sent to a topic using one of the {@link #send}
 * methods. The messages will be delivered to a single handler, if one is registered on that
 * topic. If more than one handler is registered on the same topic, the bus will choose one and
 * deliver the message to that. The bus will aim to fairly distribute messages in a round-robin way,
 * but does not guarantee strict round-robin under all circumstances.<p>
 * The order of messages received by any specific handler from a specific sender should match the
 * order of messages sent from that sender.<p>
 * When sending a message, a reply handler can be provided. If so, it will be called when the reply
 * from the receiver has been received. Reply messages can also be replied to, etc, ad infinitum<p>
 * Different event bus instances can be clustered together over a network, to give a single logical
 * event bus.<p>
 */
@protocol GDCBus

/**
 * Close the Bus and release all resources.
 */
- (void)close;

/* The state of the Bus. */
- (GDCState)getReadyState;

/* Returns the session ID used by this bus. */
- (NSString *)getSessionId;

/**
 * Publish a message
 *
 * @param topic The topic to publish it to
 * @param msg The message
 */
- (id<GDCBus>)publish:(NSString *)topic message:(id)msg;

/**
 * Publish a local message
 *
 * @param topic The topic to publish it to
 * @param msg The message
 */
- (id<GDCBus>)publishLocal:(NSString *)topic message:(id)msg;

/**
* Send a message
*
* @param topic The topic to send it to
* @param msg The message
* @param replyHandler Reply handler will be called when any reply from the recipient is received
*/
- (id<GDCBus>)send:(NSString *)topic message:(id)msg replyHandler:(GDCMessageHandler)replyHandler;

/**
* Send a local message
*
* @param topic The topic to send it to
* @param msg The message
* @param replyHandler Reply handler will be called when any reply from the recipient is received
*/
- (id<GDCBus>)sendLocal:(NSString *)topic message:(id)msg replyHandler:(GDCMessageHandler)replyHandler;

/**
* Registers a handler against the specified topic
*
* @param topic The topic to register it at
* @param handler The handler
* @return the handler registration, can be stored in order to unregister the handler later
*/
- (id<GDCRegistration>)subscribe:(NSString *)topic handler:(GDCMessageHandler)handler;

/**
* Registers a local handler against the specified topic. The handler info won't be propagated
* across the cluster
*
* @param topic The topic to register it at
* @param handler The handler
*/
- (id<GDCRegistration>)subscribeLocal:(NSString *)topic handler:(GDCMessageHandler)handler;

@end
