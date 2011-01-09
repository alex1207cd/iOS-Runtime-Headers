/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSString;



@interface MCAnchorCertificatePayloadHandler : MCPayloadHandler 
{
    NSData *_certificate;
    struct __CFData { } *_persistentID;
    NSString *_password;
    BOOL _isSelfSigned;
    struct __SecCertificate { } *_secCertificate;
}

+ (id)descriptionForPayloadCount:(NSUInteger)arg1;
+ (struct __SecCertificate { }*)certificateFromPossiblyPEMEncodedData:(id)arg1;

- (id)initWithPayload:(id)arg1;
- (void)dealloc;
- (id)performInstallStep:(NSInteger)arg1 withRoot:(id)arg2 truth:(id)arg3;
- (id)certificateData;
- (id)descriptionForPrompt;
- (id)persistentID;
- (id)validatePayload;
- (id)installPayload;
- (id)removePayload;
- (id)createCouldNotDecodeAnchorCertificateError;
- (id)createCouldNotInstallAnchorCertificateError;
- (id)createCouldNotFindAnchorCertificateToRemoveError;
- (id)createCouldNotRemoveAnchorCertificateError;

@end
