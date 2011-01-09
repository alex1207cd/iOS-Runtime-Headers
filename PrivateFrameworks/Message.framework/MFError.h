/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary;



@interface MFError : NSError 
{
    NSMutableDictionary *_moreUserInfo;
}

+ (id)errorWithDomain:(id)arg1 code:(long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long)arg2 localizedDescription:(id)arg3 title:(id)arg4 userInfo:(id)arg5;
+ (id)errorWithException:(id)arg1;

- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfo;
- (id)localizedDescription;
- (id)moreInfo;
- (id)shortDescription;
- (void)setLocalizedDescription:(id)arg1;
- (void)setMoreInfo:(id)arg1;
- (void)setShortDescription:(id)arg1;
- (void)useGenericDescription:(id)arg1;
- (void)dealloc;

@end
