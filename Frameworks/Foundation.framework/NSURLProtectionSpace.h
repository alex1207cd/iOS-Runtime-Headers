/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLProtectionSpaceInternal;



@interface NSURLProtectionSpace : NSObject <NSCopying>
{
    NSURLProtectionSpaceInternal *_internal;
}


- (id)_internalInit;
- (id)initWithHost:(id)arg1 port:(NSInteger)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)initWithProxyHost:(id)arg1 port:(NSInteger)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)realm;
- (BOOL)receivesCredentialSecurely;
- (BOOL)isProxy;
- (id)host;
- (NSInteger)port;
- (id)proxyType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)authenticationMethod;
- (id)protocol;
- (struct _CFURLProtectionSpace { }*)_cfurlprtotectionspace;

@end
