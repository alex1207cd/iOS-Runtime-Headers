/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, NSString;



@interface CPMessageEntry : NSObject 
{
    NSInteger m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSInteger m_count;
}

+ (void)initialize;

- (id)initWithTag:(NSInteger)arg1 text:(id)arg2 parameters:(void*)arg3;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (NSInteger)getMessageTag;
- (id)getMessageText;
- (NSInteger)getParameterCount;
- (id)getParameter:(NSUInteger)arg1;
- (NSInteger)getCount;
- (void)logWithLevel:(NSInteger)arg1;
- (id)description;
- (void)mergeEntries:(id)arg1;

@end
