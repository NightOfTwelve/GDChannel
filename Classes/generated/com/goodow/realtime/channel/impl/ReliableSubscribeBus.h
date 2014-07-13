//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/channel/impl/ReliableSubscribeBus.java
//
//  Created by retechretech.
//

#ifndef _ComGoodowRealtimeChannelImplReliableSubscribeBus_H_
#define _ComGoodowRealtimeChannelImplReliableSubscribeBus_H_

@class JavaLangVoid;
@class JavaUtilLoggingLogger;
@protocol ComGoodowRealtimeChannelBus;
@protocol ComGoodowRealtimeChannelBusHook;
@protocol ComGoodowRealtimeChannelMessage;
@protocol ComGoodowRealtimeJsonJsonArray;
@protocol ComGoodowRealtimeJsonJsonObject;

#import "JreEmulation.h"
#include "com/goodow/realtime/channel/impl/BusHookProxy.h"
#include "com/goodow/realtime/channel/impl/BusProxy.h"
#include "com/goodow/realtime/core/Handler.h"
#include "com/goodow/realtime/json/JsonArray.h"

@interface ComGoodowRealtimeChannelImplReliableSubscribeBus : ComGoodowRealtimeChannelImplBusProxy {
 @public
  NSString *sequenceNumberKey_;
  NSString *publishChannel_;
  int acknowledgeDelayMillis_;
  id<ComGoodowRealtimeJsonJsonObject> pendings_;
  id<ComGoodowRealtimeJsonJsonObject> currentSequences_;
  id<ComGoodowRealtimeJsonJsonObject> knownHeadSequences_;
  id<ComGoodowRealtimeJsonJsonObject> acknowledgeScheduled_;
  id<ComGoodowRealtimeJsonJsonObject> acknowledgeNumbers_;
}

- (id)initWithComGoodowRealtimeChannelBus:(id<ComGoodowRealtimeChannelBus>)delegate
      withComGoodowRealtimeJsonJsonObject:(id<ComGoodowRealtimeJsonJsonObject>)options;

- (void)close;

- (void)synchronizeSequenceNumberWithNSString:(NSString *)topic
                                   withDouble:(double)initialSequenceNumber;

- (void)catchupWithNSString:(NSString *)topic
                 withDouble:(double)currentSequence;

- (double)getSequenceNumberWithNSString:(NSString *)topic
                                 withId:(id)body;

- (BOOL)needProcessWithNSString:(NSString *)topic;

- (BOOL)onReceiveMessageWithComGoodowRealtimeChannelMessage:(id<ComGoodowRealtimeChannelMessage>)message;

- (void)initSequenceNumberWithNSString:(NSString *)topic
                            withDouble:(double)initialSequenceNumber OBJC_METHOD_FAMILY_NONE;

- (void)scheduleAcknowledgmentWithNSString:(NSString *)topic;

- (void)scheduleMessagesWithComGoodowRealtimeJsonJsonArray:(id<ComGoodowRealtimeJsonJsonArray>)messages;

- (void)copyAllFieldsTo:(ComGoodowRealtimeChannelImplReliableSubscribeBus *)other;

@end

FOUNDATION_EXPORT BOOL ComGoodowRealtimeChannelImplReliableSubscribeBus_initialized;
J2OBJC_STATIC_INIT(ComGoodowRealtimeChannelImplReliableSubscribeBus)

J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus, sequenceNumberKey_, NSString *)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus, publishChannel_, NSString *)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus, pendings_, id<ComGoodowRealtimeJsonJsonObject>)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus, currentSequences_, id<ComGoodowRealtimeJsonJsonObject>)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus, knownHeadSequences_, id<ComGoodowRealtimeJsonJsonObject>)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus, acknowledgeScheduled_, id<ComGoodowRealtimeJsonJsonObject>)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus, acknowledgeNumbers_, id<ComGoodowRealtimeJsonJsonObject>)

FOUNDATION_EXPORT NSString *ComGoodowRealtimeChannelImplReliableSubscribeBus_SEQUENCE_NUMBER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus, SEQUENCE_NUMBER_, NSString *)

FOUNDATION_EXPORT NSString *ComGoodowRealtimeChannelImplReliableSubscribeBus_PUBLISH_CHANNEL_;
J2OBJC_STATIC_FIELD_GETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus, PUBLISH_CHANNEL_, NSString *)

FOUNDATION_EXPORT NSString *ComGoodowRealtimeChannelImplReliableSubscribeBus_ACKNOWLEDGE_DELAY_MILLIS_;
J2OBJC_STATIC_FIELD_GETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus, ACKNOWLEDGE_DELAY_MILLIS_, NSString *)

FOUNDATION_EXPORT JavaUtilLoggingLogger *ComGoodowRealtimeChannelImplReliableSubscribeBus_log_;
J2OBJC_STATIC_FIELD_GETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus, log_, JavaUtilLoggingLogger *)

@interface ComGoodowRealtimeChannelImplReliableSubscribeBus_$1 : ComGoodowRealtimeChannelImplBusHookProxy {
 @public
  ComGoodowRealtimeChannelImplReliableSubscribeBus *this$0_;
}

- (BOOL)handleReceiveMessageWithComGoodowRealtimeChannelMessage:(id<ComGoodowRealtimeChannelMessage>)message;

- (BOOL)handleUnsubscribeWithNSString:(NSString *)topic;

- (id<ComGoodowRealtimeChannelBusHook>)delegate;

- (id)initWithComGoodowRealtimeChannelImplReliableSubscribeBus:(ComGoodowRealtimeChannelImplReliableSubscribeBus *)outer$;

@end

__attribute__((always_inline)) inline void ComGoodowRealtimeChannelImplReliableSubscribeBus_$1_init() {}

J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus_$1, this$0_, ComGoodowRealtimeChannelImplReliableSubscribeBus *)

@interface ComGoodowRealtimeChannelImplReliableSubscribeBus_$2 : NSObject < ComGoodowRealtimeCoreHandler > {
 @public
  ComGoodowRealtimeChannelImplReliableSubscribeBus *this$0_;
  NSString *val$topic_;
}

- (void)handleWithId:(id<ComGoodowRealtimeChannelMessage>)message;

- (id)initWithComGoodowRealtimeChannelImplReliableSubscribeBus:(ComGoodowRealtimeChannelImplReliableSubscribeBus *)outer$
                                                  withNSString:(NSString *)capture$0;

@end

__attribute__((always_inline)) inline void ComGoodowRealtimeChannelImplReliableSubscribeBus_$2_init() {}

J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus_$2, this$0_, ComGoodowRealtimeChannelImplReliableSubscribeBus *)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus_$2, val$topic_, NSString *)

@interface ComGoodowRealtimeChannelImplReliableSubscribeBus_$2_$1 : NSObject < ComGoodowRealtimeJsonJsonArray_ListIterator > {
 @public
  ComGoodowRealtimeChannelImplReliableSubscribeBus_$2 *this$0_;
  NSString *val$replyTopic_;
}

- (void)callWithInt:(int)index
             withId:(id)value;

- (id)initWithComGoodowRealtimeChannelImplReliableSubscribeBus_$2:(ComGoodowRealtimeChannelImplReliableSubscribeBus_$2 *)outer$
                                                     withNSString:(NSString *)capture$0;

@end

__attribute__((always_inline)) inline void ComGoodowRealtimeChannelImplReliableSubscribeBus_$2_$1_init() {}

J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus_$2_$1, this$0_, ComGoodowRealtimeChannelImplReliableSubscribeBus_$2 *)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus_$2_$1, val$replyTopic_, NSString *)

@interface ComGoodowRealtimeChannelImplReliableSubscribeBus_$3 : NSObject < ComGoodowRealtimeCoreHandler > {
 @public
  ComGoodowRealtimeChannelImplReliableSubscribeBus *this$0_;
  NSString *val$topic_;
}

- (void)handleWithId:(id)event;

- (id)initWithComGoodowRealtimeChannelImplReliableSubscribeBus:(ComGoodowRealtimeChannelImplReliableSubscribeBus *)outer$
                                                  withNSString:(NSString *)capture$0;

@end

__attribute__((always_inline)) inline void ComGoodowRealtimeChannelImplReliableSubscribeBus_$3_init() {}

J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus_$3, this$0_, ComGoodowRealtimeChannelImplReliableSubscribeBus *)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus_$3, val$topic_, NSString *)

@interface ComGoodowRealtimeChannelImplReliableSubscribeBus_$4 : NSObject < ComGoodowRealtimeCoreHandler > {
 @public
  ComGoodowRealtimeChannelImplReliableSubscribeBus *this$0_;
  id<ComGoodowRealtimeJsonJsonArray> val$messages_;
}

- (void)handleWithId:(id)event;

- (id)initWithComGoodowRealtimeChannelImplReliableSubscribeBus:(ComGoodowRealtimeChannelImplReliableSubscribeBus *)outer$
                            withComGoodowRealtimeJsonJsonArray:(id<ComGoodowRealtimeJsonJsonArray>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoodowRealtimeChannelImplReliableSubscribeBus_$4_init() {}

J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus_$4, this$0_, ComGoodowRealtimeChannelImplReliableSubscribeBus *)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus_$4, val$messages_, id<ComGoodowRealtimeJsonJsonArray>)

@interface ComGoodowRealtimeChannelImplReliableSubscribeBus_$4_$1 : NSObject < ComGoodowRealtimeJsonJsonArray_ListIterator > {
 @public
  ComGoodowRealtimeChannelImplReliableSubscribeBus_$4 *this$0_;
}

- (void)callWithInt:(int)index
             withId:(id<ComGoodowRealtimeChannelMessage>)message;

- (id)initWithComGoodowRealtimeChannelImplReliableSubscribeBus_$4:(ComGoodowRealtimeChannelImplReliableSubscribeBus_$4 *)outer$;

@end

__attribute__((always_inline)) inline void ComGoodowRealtimeChannelImplReliableSubscribeBus_$4_$1_init() {}

J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplReliableSubscribeBus_$4_$1, this$0_, ComGoodowRealtimeChannelImplReliableSubscribeBus_$4 *)

#endif // _ComGoodowRealtimeChannelImplReliableSubscribeBus_H_