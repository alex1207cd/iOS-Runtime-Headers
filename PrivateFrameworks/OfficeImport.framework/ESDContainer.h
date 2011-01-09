/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;



@interface ESDContainer : ESDObject 
{
    NSMutableArray *mChildren;
}

+ (void)readChildrenOfObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1 reader:(struct OcReader { }*)arg2 toArray:(id)arg3;
+ (void)pbReadChildrenOfObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1 toArray:(id)arg2 state:(id)arg3;

- (id)initWithEshObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1;
- (id)initFromReader:(struct OcReader { }*)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;
- (void)dealloc;
- (struct EshContainer { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct ChVector<EshHeader*> { struct EshHeader {} **x_4_1_1; struct EshHeader {} **x_4_1_2; NSUInteger x_4_1_3; NSUInteger x_4_1_4; NSUInteger x_4_1_5; } x4; }*)eshContainer;
- (NSInteger)childCount;
- (id)childAt:(NSInteger)arg1;
- (void)addChild:(id)arg1;
- (void)insertChild:(id)arg1 at:(NSInteger)arg2;
- (void)removeChild:(id)arg1;
- (id)firstChildOfType:(unsigned short)arg1;
- (id)firstChildOfType:(unsigned short)arg1 afterChild:(id)arg2;
- (id)firstChildOfType:(unsigned short)arg1 afterIndex:(NSInteger)arg2;
- (NSInteger)indexOfFirstChildOfType:(unsigned short)arg1 afterIndex:(NSInteger)arg2;
- (id)childOfType:(unsigned short)arg1 instance:(short)arg2;
- (void)writeToWriter:(struct OcWriter { }*)arg1;
- (id)ebInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (struct EshGroup { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> > { struct map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_6_1; struct _Rb_tree_node_base { NSInteger x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; NSUInteger x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_1_2_4; struct EshColor { struct Data { NSInteger x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_1_2_5; } x_3_1_1; struct EshOpt { int (**x_2_2_1)(); unsigned short x_2_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_2_2_3; struct ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> > { struct map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_6_1; struct _Rb_tree_node_base { NSInteger x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; NSUInteger x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_2_2_4; struct EshColor { struct Data { NSInteger x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_2_2_5; } x_3_1_2; struct EshSp { int (**x_3_2_1)(); unsigned short x_3_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_3_2_3; NSUInteger x_3_2_4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_3_2_5; void*x_3_2_6; void*x_3_2_7; void*x_3_2_8; void*x_3_2_9; void*x_3_2_10; void*x_3_2_11; void*x_3_2_12; void*x_3_2_13; void*x_3_2_14; void*x_3_2_15; void*x_3_2_16; } x_3_1_3; struct CsRect<ChSINT4> { NSInteger x_4_2_1[4]; } x_3_1_4; } x3; int (**x4)(); struct EshSpgr {} *x5; struct EshGroupProperties { int (**x_6_1_1)(); unsigned short x_6_1_2; struct EshContentData {} *x_6_1_3; struct EshRectAtom {} *x_6_1_4; } x6; struct EshGroupLocks { int (**x_7_1_1)(); unsigned short x_7_1_2; struct EshContentData {} *x_7_1_3; } x7; struct EshDiagram { int (**x_8_1_1)(); unsigned short x_8_1_2; struct EshContentData {} *x_8_1_3; } x8; }*)eshGroup;
     /* Encoded args for previous method: ^{EshGroup=^^?S{EshContentData={EshOpt=^^?S{EshHeader=iIsSC}{ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> >={map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}}{EshOpt=^^?S{EshHeader=iIsSC}{ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> >={map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}}{EshSp=^^?S{EshHeader=iIsSC}IBBBBBBBBBBBB}{CsRect<ChSINT4>=[4i]}}^^?^{EshSpgr}{EshGroupProperties=^^?S^{EshContentData}^{EshRectAtom}}{EshGroupLocks=^^?S^{EshContentData}}{EshDiagram=^^?S^{EshContentData}}}8@0:4 */

- (id)shapeContainer;
- (id)pbInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;

@end
