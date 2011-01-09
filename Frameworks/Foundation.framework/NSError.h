/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSDictionary;



@interface NSError : NSObject <NSCopying, NSCoding>
{
    void *_reserved;
    NSInteger _code;
    NSString *_domain;
    NSDictionary *_userInfo;
}

+ (id)errorWithDomain:(id)arg1 code:(NSInteger)arg2 userInfo:(id)arg3;
+ (void)_registerBuiltInFormatters;
+ (void)_registerFormatter:(int (*)())arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (id)_errorWithDomain:(id)arg1 code:(NSInteger)arg2 URL:(id)arg3 userInfoObjectsAndKeys:(id)arg4;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_web_errorWithDomain:(id)arg1 code:(NSInteger)arg2 failingURL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(NSInteger)arg2 URL:(id)arg3;
+ (void)_registerWebKitErrors;
+ (id)_webkit_errorWithDomain:(id)arg1 code:(NSInteger)arg2 URL:(id)arg3;
+ (id)_webKitErrorWithDomain:(id)arg1 code:(NSInteger)arg2 URL:(id)arg3;
+ (id)_webKitErrorWithCode:(NSInteger)arg1 failingURL:(id)arg2;
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)errorWithDomain:(id)arg1 code:(NSInteger)arg2 localizedDescription:(id)arg3;
+ (id)errorWithStreamDomain:(long)arg1 code:(long)arg2 localizedDescription:(id)arg3;

- (id)initWithDomain:(id)arg1 code:(NSInteger)arg2 userInfo:(id)arg3;
- (void)dealloc;
- (void)finalize;
- (NSInteger)code;
- (id)domain;
- (id)userInfo;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (struct __CFString { }*)_retainedUserInfoCallBackForKey:(id)arg1;
- (id)localizedDescription;
- (id)localizedFailureReason;
- (id)localizedRecoverySuggestion;
- (id)localizedRecoveryOptions;
- (id)recoveryAttempter;
- (id)helpAnchor;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (NSInteger)_collectApplicableUserInfoFormatters:(struct { /* ? */ }**)arg1 max:(NSInteger)arg2;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct { /* ? */ }**)arg3 count:(NSInteger)arg4;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_cocoaErrorString:(id)arg1;
- (id)_web_initWithDomain_nowarn:(id)arg1 code:(NSInteger)arg2 URL:(id)arg3;
- (id)_web_initWithDomain:(id)arg1 code:(NSInteger)arg2 failingURL:(id)arg3;
- (BOOL)_web_errorIsInDomain:(id)arg1;
- (id)_web_localizedDescription;
- (id)_web_failingURL;
- (id)_webkit_initWithDomain:(id)arg1 code:(NSInteger)arg2 URL:(id)arg3;
- (id)_initWithPluginErrorCode:(NSInteger)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5;
- (NSInteger)POP3ResponseCode;
- (BOOL)isUserCancelledError;
- (BOOL)shouldBeReportedToUser;
- (id)moreInfo;
- (id)shortDescription;
- (BOOL)isEqualToError:(id)arg1;
- (BOOL)isStreamDomain:(long)arg1 error:(long)arg2;
- (BOOL)isPasswordMismatchError;
- (BOOL)isExpiredPasswordError;
- (BOOL)isNewPasswordError;
- (BOOL)isInvalidSubscriberError;
- (BOOL)isConnectivityError;
- (BOOL)isServerError;
- (BOOL)isSecurityError;
- (BOOL)shouldPresentErrorForTaskType:(NSInteger)arg1;

@end
