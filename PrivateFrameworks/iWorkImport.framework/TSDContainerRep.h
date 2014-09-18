/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSObject<TSDContainerInfo>, NSObject<TSDMutableContainerInfo>, NSString;

@interface TSDContainerRep : TSDRep <TSDMutableContainerRep> {
    NSMutableArray *mChildReps;
}

@property(readonly) NSObject<TSDContainerInfo> * containerInfo;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) NSObject<TSDMutableContainerInfo> * mutableContainerInfo;
@property(readonly) Class superclass;

- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)addChildRep:(id)arg1;
- (bool)canDrawInParallel;
- (bool)canSelectChildRep:(id)arg1;
- (id)childReps;
- (id)childRepsForHitTesting;
- (id)containerInfo;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id)arg2;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id)arg2;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitReps:(struct CGPoint { double x1; double x2; })arg1 withSlopBlock:(id)arg2;
- (id)initWithLayout:(id)arg1 canvasView:(id)arg2;
- (void)insertChildRep:(id)arg1 above:(id)arg2;
- (void)insertChildRep:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChildRep:(id)arg1 below:(id)arg2;
- (bool)mustDrawOnMainThreadForInteractiveCanvas;
- (id)mutableContainerInfo;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)removeChildRep:(id)arg1;
- (void)replaceChildRep:(id)arg1 with:(id)arg2;
- (void)selectChildRep:(id)arg1;
- (void)setChildReps:(id)arg1;
- (void)updateChildrenFromLayout;
- (id)visibleChildLayouts;

@end