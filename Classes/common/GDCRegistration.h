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
//  GDCRegistration.h
//  GDChannel
//
//  Created by Larry Tin.
//

/**
 * Registration objects returned when an event handler is bound (e.g. via
 * {@link GDCBus#registerHandler}), used to deregister.
 */
@protocol GDCRegistration

/**
 * Deregisters the handler associated with this registration object if the handler is still
 * attached to the event bus. If the handler is no longer attached to the event bus, this is a
 * no-op.
 */
- (void)unregister;

@end
