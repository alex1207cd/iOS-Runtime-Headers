/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSArray, NSString, _NSHTTPBodyStreamWrapper, NSData;



@interface NSHTTPURLRequestParameters : NSObject 
{
    NSString *method;
    NSMutableDictionary *fields;
    NSArray *extraCookies;
    NSData *data;
    _NSHTTPBodyStreamWrapper *bodyStreamWrapper;
    NSUInteger pageNotFoundCacheLifetime;
    BOOL shouldHandleCookies;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}


- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
