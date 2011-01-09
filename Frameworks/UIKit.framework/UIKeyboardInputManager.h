/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIKeyboardInputManager : NSObject 
{
}

+ (id)sharedInstanceForInputMode:(id)arg1;
+ (id)activeInstance;
+ (void)releaseSharedInstance;

- (void)addInput:(id)arg1 flags:(NSUInteger)arg2 point:(struct CGPoint { float x1; float x2; })arg3;
- (void)setInput:(id)arg1;
- (void)deleteFromInput;
- (void)clearInput;
- (void)acceptInput;
- (void)setInputIndex:(NSUInteger)arg1;
- (NSUInteger)inputIndex;
- (NSUInteger)inputCount;
- (id)inputString;
- (void)inputLocationChanged;
- (BOOL)stringEndsWord:(id)arg1;
- (id)composedTyping;
- (id)autocorrection;
- (id)candidates;
- (id)remainingInput;
- (BOOL)usesCandidateSelection;
- (BOOL)usesAutoDeleteWord;
- (BOOL)suppressesCandidateDisplay;
- (id)defaultCandidate;
- (BOOL)suppliesCompletions;
- (id)stringForDoubleKey:(id)arg1;
- (BOOL)setInputMode:(id)arg1;
- (void)setAutoCorrects:(BOOL)arg1;
- (void)setShift:(BOOL)arg1;
- (void)setAutoShift:(BOOL)arg1;
- (BOOL)shouldExtendPriorWord;
- (void)configureKeyboard:(id)arg1 forCandidates:(id)arg2;
- (void)addToTypingHistory:(id)arg1;
- (void)textAccepted:(id)arg1;
- (void)candidateAccepted:(id)arg1;
- (void)increaseUserFrequency:(id)arg1;
- (void)decreaseUserFrequency:(id)arg1;
- (void)clearDynamicDictionary;
- (void)loadAddressBook;
- (id)shadowTyping;
- (void)setCalculatesChargedKeyProbabilities:(BOOL)arg1;
- (struct __CFArray { }*)chargeableKeys;
- (struct __CFDictionary { }*)chargedKeyProbabilities;
- (id)addInputObject:(id)arg1;
- (id)setInputObject:(id)arg1;
- (BOOL)canHandleKeyHitTest;
- (void)clearKeyAreas;
- (void)registerKeyArea:(struct CGPoint { float x1; float x2; })arg1 withRadii:(struct CGPoint { float x1; float x2; })arg2 forKeyCode:(unsigned short)arg3 forLowerKey:(id)arg4 forUpperKey:(id)arg5;
- (NSInteger)keyHitTest:(struct CGPoint { float x1; float x2; })arg1 touchStage:(NSInteger)arg2 atTime:(double)arg3 withPathInfo:(struct { unsigned char x1; unsigned char x2; unsigned char x3; float x4; float x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; struct __GSWindow {} *x7; }*)arg4 forceShift:(BOOL)arg5;
- (BOOL)keySlidIntoSwipe;
- (NSInteger)keyCancel:(struct CGPoint { float x1; float x2; })arg1 atTime:(double)arg2 fromPath:(NSInteger)arg3 withIdentity:(NSInteger)arg4 forceShift:(BOOL)arg5;
- (void)deleteFromStrokeHistory:(BOOL)arg1;

@end
