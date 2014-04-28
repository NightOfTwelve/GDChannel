//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/channel/State.java
//
//  Created by retechretech.
//

#include "IOSClass.h"
#include "com/goodow/realtime/channel/State.h"
#include "java/lang/IllegalArgumentException.h"

BOOL GDCStateEnum_initialized = NO;

GDCStateEnum *GDCStateEnum_values[4];

@implementation GDCStateEnum

- (id)copyWithZone:(NSZone *)zone {
  return self;
}

- (id)initWithNSString:(NSString *)__name withInt:(int)__ordinal {
  return [super initWithNSString:__name withInt:__ordinal];
}

+ (void)initialize {
  if (self == [GDCStateEnum class]) {
    GDCStateEnum_CONNECTING = [[GDCStateEnum alloc] initWithNSString:@"CONNECTING" withInt:0];
    GDCStateEnum_OPEN = [[GDCStateEnum alloc] initWithNSString:@"OPEN" withInt:1];
    GDCStateEnum_CLOSING = [[GDCStateEnum alloc] initWithNSString:@"CLOSING" withInt:2];
    GDCStateEnum_CLOSED = [[GDCStateEnum alloc] initWithNSString:@"CLOSED" withInt:3];
    GDCStateEnum_initialized = YES;
  }
}

+ (IOSObjectArray *)values {
  return [IOSObjectArray arrayWithObjects:GDCStateEnum_values count:4 type:[IOSClass classWithClass:[GDCStateEnum class]]];
}

+ (GDCStateEnum *)valueOfWithNSString:(NSString *)name {
  for (int i = 0; i < 4; i++) {
    GDCStateEnum *e = GDCStateEnum_values[i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw [[JavaLangIllegalArgumentException alloc] initWithNSString:name];
  return nil;
}

+ (J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { "init", NULL, NULL, 0x1, NULL },
  };
  static const char *superclass_type_args[] = {"Lcom.goodow.realtime.channel.State;"};
  static J2ObjcClassInfo _GDCStateEnum = { "State", "com.goodow.realtime.channel", NULL, 0x4011, 1, methods, 0, NULL, 1, superclass_type_args};
  return &_GDCStateEnum;
}

@end