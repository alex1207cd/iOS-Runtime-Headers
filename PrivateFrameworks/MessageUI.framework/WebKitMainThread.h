/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MessageUI.framework/MessageUI
 */

@class NSLock;



@interface WebKitMainThread : NSObject 
{
    struct __CFDictionary { } *_visibleDict;
    NSLock *_visibleDictLock;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_mainThreadPopulateDictForMimeType:(id)arg1;
- (NSInteger)dictValueForMimeType:(id)arg1;

@end
