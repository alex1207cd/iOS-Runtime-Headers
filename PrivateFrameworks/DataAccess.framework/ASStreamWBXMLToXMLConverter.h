/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSOutputStream, NSInputStream;



@interface ASStreamWBXMLToXMLConverter : ASWBXMLToXMLConverter 
{
    NSInputStream *_input;
    NSOutputStream *_output;
}


- (void)outputData:(id)arg1;
- (void)outputString:(id)arg1;
- (BOOL)runSynchronously;
- (NSInteger)readFromInput;
- (void)stream:(id)arg1 handleEvent:(NSUInteger)arg2;
- (id)initWithWBXMLInput:(id)arg1 forOutput:(id)arg2 usingMetadata:(BOOL)arg3;
- (void)dealloc;

@end
