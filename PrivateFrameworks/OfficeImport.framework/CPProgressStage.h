/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CPProgressContext, CPProgressStage;



@interface CPProgressStage : NSObject 
{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    CPProgressStage *m_parentStage;
    CPProgressContext *m_context;
}


- (id)initRootStageInContext:(id)arg1;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3;
- (void)dealloc;
- (void)advanceProgress:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)end;
- (id)parentStage;
- (double)currentPosition;

@end
