// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-

@import Cocoa;

@interface StatusMessageManager : NSObject

- (void)setupStatusMessageManager;

- (void)refresh;

- (void)resetStatusMessage;
- (void)setStatusMessage:(NSInteger)index message:(NSString *)message;
- (void)showExampleStatusWindow:(BOOL)visibility;

@end
