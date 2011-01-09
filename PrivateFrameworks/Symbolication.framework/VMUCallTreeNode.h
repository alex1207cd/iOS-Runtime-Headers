/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, NSString, VMUCallTreeNode;



@interface VMUCallTreeNode : NSObject 
{
    NSUInteger flags;
    NSString *name;
    NSUInteger address;
    NSArray *sortedChildrenWithPseudoNode;
    NSUInteger numBytes;
    NSUInteger count;
    union { 
        NSString *thePseudoName; 
        VMUCallTreeNode *theChild; 
        VMUCallTreeNode **theChildren; 
    } un;
    VMUCallTreeNode *parent;
}

+ (id)makeFakeRootForNode:(id)arg1;
+ (id)rootForSamples:(id)arg1 symbolicator:(id)arg2;
+ (id)rootForTraceData:(id)arg1;
+ (id)rootForSampleFile:(struct __sFILE { char *x1; NSInteger x2; NSInteger x3; short x4; short x5; struct __sbuf { char *x_6_1_1; NSInteger x_6_1_2; } x6; NSInteger x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; NSInteger x_13_1_2; } x13; struct __sFILEX {} *x14; NSInteger x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; NSInteger x_18_1_2; } x18; NSInteger x19; long long x20; }*)arg1;
+ (void)compareChildrenOf:(id)arg1 toChildrenOf:(id)arg2 storeDiffIn:(id)arg3;
+ (id)rootForCompare:(id)arg1 to:(id)arg2;
+ (id)rootForNonWaitingSamples:(id)arg1 symbolicator:(id)arg2;

- (NSUInteger)count;
- (NSUInteger)numBytes;
- (id)name;
- (NSUInteger)address;
- (id)parent;
- (id)browserName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isPseudo;
- (id)findOrAddChildWithName:(id)arg1 address:(NSUInteger)arg2;
- (id)retain;
- (NSUInteger)retainCount;
- (void)release;
- (void)dealloc;
- (void)addStackEntry:(id)arg1 symbolicator:(id)arg2 numBytes:(NSUInteger)arg3 threadTable:(id)arg4;
- (void)addTraceEvent:(id)arg1 forTraceData:(id)arg2;
- (char *)addSubTreeFromFile:(struct __sFILE { char *x1; NSInteger x2; NSInteger x3; short x4; short x5; struct __sbuf { char *x_6_1_1; NSInteger x_6_1_2; } x6; NSInteger x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; NSInteger x_13_1_2; } x13; struct __sFILEX {} *x14; NSInteger x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; NSInteger x_18_1_2; } x18; NSInteger x19; long long x20; }*)arg1 withIndent:(NSInteger)arg2 withLine:(char *)arg3 withLen:(NSUInteger*)arg4;
- (NSInteger)compare:(id)arg1;
- (NSInteger)compareNames:(id)arg1;
- (NSUInteger)sumOfChildrenCounts;
- (id)pseudoName;
- (id)pseudoNodeTopOfStackChild;
- (id)filterOutWaiting;
- (id)filterOutSymbols:(id)arg1;
- (id)filterOutSymbols:(id)arg1 required:(id)arg2;
- (id)invertedNode;
- (id)prune:(NSUInteger)arg1;
- (id)nextNode;
- (id)prevNode;
- (id)findNodeMatching:(id)arg1 searchForward:(BOOL)arg2 ignoreCase:(BOOL)arg3 wholeWords:(BOOL)arg4;
- (void)setNameToCount:(id)arg1;
- (id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2;
- (id)sortedChildrenWithPseudoNode;
- (id)sortedChildrenByNameWithPseudoNode;
- (id)fullOutputWithThreshold:(NSUInteger)arg1;
- (id)largestTopOfStackPath;

@end
