/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PBOutlineBulletDictionary, ESDRoot, NSArray, OADTextListStyle, PBOfficeArtState, PDSlideBase, NSMutableArray, ESDObject, PDPresentation;



@interface PBPresentationState : NSObject 
{

  /* Error parsing encoded ivar type info: ^{PptBinaryReader=^^?^^?^{EshObjectFactory}B^{__sFILE}{SsrwOORootStorage="m_pStorage"^{_Storage}"m_pBuffer"[36S]"m_pRootStorage"^{_RootStorage}}^{SsrwOOStorage}^{SsrwOOStorage}^{SsrwOOStream}^{SsrwOOStream}iB^{PptEshReader}^{PptEshReader}^{PptParserVisitor}^{PptPersistDir}^{EshHeader}^{EshObject}IIIIII{ChMap<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4> >="m_map"{map<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > >="_M_t"{_Rb_tree<ChUINT4,std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > >="_M_impl"{_Rb_tree_impl<CsLess<ChUINT4>,false>="_M_key_compare"{CsLess<ChUINT4>=}"_M_header"{_Rb_tree_node_base="_M_color"i"_M_parent"^{_Rb_tree_node_base}"_M_left"^{_Rb_tree_node_base}"_M_right"^{_Rb_tree_node_base}}"_M_node_count"I}}}}^{PptObjectFactory}^{EshMark}i{ChVector<ChPair<ChUINT4, EscherObjectEnums> >="m_vector"^{ChPair<ChUINT4,EscherObjectEnums>}"m_tmpVector"^{ChPair<ChUINT4,EscherObjectEnums>}"m_count"I"m_size"I"m_blockSize"I}*I} */
    struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; struct __sFILE {} *x5; struct SsrwOORootStorage { 
            struct _Storage {} *m_pStorage; 
            unsigned short m_pBuffer[36]; 
            struct _RootStorage {} *m_pRootStorage; 
        } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; NSInteger x11; void*x12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; NSUInteger x19; NSUInteger x20; NSUInteger x21; NSUInteger x22; NSUInteger x23; NSUInteger x24; struct ChMap<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4> > { 
            struct map<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { 
                struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { 
                    struct _Rb_tree_impl<CsLess<ChUINT4>,false> { 
                        struct CsLess<ChUINT4> { } _M_key_compare; 
                        struct _Rb_tree_node_base { 
                            NSInteger _M_color; 
                            struct _Rb_tree_node_base {} *_M_parent; 
                            struct _Rb_tree_node_base {} *_M_left; 
                            struct _Rb_tree_node_base {} *_M_right; 
                        } _M_header; 
                        NSUInteger _M_node_count; 
                    } _M_impl; 
                } _M_t; 
            } m_map; 
        } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; NSInteger x28; struct ChVector<ChPair<ChUINT4, EscherObjectEnums> > { 
            struct ChPair<ChUINT4,EscherObjectEnums> {} *m_vector; 
            struct ChPair<ChUINT4,EscherObjectEnums> {} *m_tmpVector; 
            NSUInteger m_count; 
            NSUInteger m_size; 
            NSUInteger m_blockSize; 
        } x29; char *x30; NSUInteger x31; } *mPptBinaryReader;

    PDPresentation *mTgtPresentation;
    ESDRoot *mDocumentRoot;
    NSMutableArray *mSlideIndexes;
    PBOfficeArtState *mOfficeArtState;
    NSMutableArray *mFontEntities;
    OADTextListStyle *mBaseTextListStyle;
    NSArray *mPlaceholderTexts;
    PDSlideBase *mTgtSlide;
    NSUInteger mTextLength;
    BOOL mHasCharacterPropertyBulletIndex;
    NSUInteger mBulletIndex;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    NSMutableArray *mBulletBlips;
}


- (id)initWithReader:(struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; NSInteger x11; void*x12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; NSUInteger x19; NSUInteger x20; NSUInteger x21; NSUInteger x22; NSUInteger x23; NSUInteger x24; struct ChMap<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4> > { struct map<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_4_1; struct _Rb_tree_node_base { NSInteger x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; NSUInteger x_1_4_3; } x_1_3_1; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; NSInteger x28; struct ChVector<ChPair<ChUINT4, EscherObjectEnums> > { struct ChPair<ChUINT4,EscherObjectEnums> {} *x_29_1_1; struct ChPair<ChUINT4,EscherObjectEnums> {} *x_29_1_2; NSUInteger x_29_1_3; NSUInteger x_29_1_4; NSUInteger x_29_1_5; } x29; char *x30; NSUInteger x31; }*)arg1 tgtPresentation:(id)arg2;
     /* Encoded args for previous method: @16@0:4^{PptBinaryReader=^^?^^?^{EshObjectFactory}B^{__sFILE}{SsrwOORootStorage=^{_Storage}[36S]^{_RootStorage}}^{SsrwOOStorage}^{SsrwOOStorage}^{SsrwOOStream}^{SsrwOOStream}iB^{PptEshReader}^{PptEshReader}^{PptParserVisitor}^{PptPersistDir}^{EshHeader}^{EshObject}IIIIII{ChMap<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4> >={map<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}^{PptObjectFactory}^{EshMark}i{ChVector<ChPair<ChUINT4, EscherObjectEnums> >=^{ChPair<ChUINT4,EscherObjectEnums>}^{ChPair<ChUINT4,EscherObjectEnums>}III}*I}8@12 */

- (void)dealloc;
- (struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; NSInteger x11; void*x12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; NSUInteger x19; NSUInteger x20; NSUInteger x21; NSUInteger x22; NSUInteger x23; NSUInteger x24; struct ChMap<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4> > { struct map<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_4_1; struct _Rb_tree_node_base { NSInteger x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; NSUInteger x_1_4_3; } x_1_3_1; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; NSInteger x28; struct ChVector<ChPair<ChUINT4, EscherObjectEnums> > { struct ChPair<ChUINT4,EscherObjectEnums> {} *x_29_1_1; struct ChPair<ChUINT4,EscherObjectEnums> {} *x_29_1_2; NSUInteger x_29_1_3; NSUInteger x_29_1_4; NSUInteger x_29_1_5; } x29; char *x30; NSUInteger x31; }*)reader;
     /* Encoded args for previous method: ^{PptBinaryReader=^^?^^?^{EshObjectFactory}B^{__sFILE}{SsrwOORootStorage=^{_Storage}[36S]^{_RootStorage}}^{SsrwOOStorage}^{SsrwOOStorage}^{SsrwOOStream}^{SsrwOOStream}iB^{PptEshReader}^{PptEshReader}^{PptParserVisitor}^{PptPersistDir}^{EshHeader}^{EshObject}IIIIII{ChMap<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4> >={map<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}^{PptObjectFactory}^{EshMark}i{ChVector<ChPair<ChUINT4, EscherObjectEnums> >=^{ChPair<ChUINT4,EscherObjectEnums>}^{ChPair<ChUINT4,EscherObjectEnums>}III}*I}8@0:4 */

- (id)documentRoot;
- (void)setDocumentRoot:(id)arg1;
- (id)tgtPresentation;
- (NSInteger)numberOfSlideIndexes;
- (void)addSlideIndex:(NSInteger)arg1;
- (NSInteger)getSlideIndexAt:(NSInteger)arg1;
- (id)slideIndexesRef;
- (id)officeArtState;
- (NSUInteger)fontEntityCount;
- (void)addFontEntity:(id)arg1 charSet:(NSInteger)arg2 type:(NSInteger)arg3 family:(NSInteger)arg4;
- (id)fontEntityAtIndex:(NSUInteger)arg1;
- (id)baseTextListStyle;
- (void)setBaseTextListStyle:(id)arg1;
- (id)placeholderTexts;
- (void)setPlaceholderTexts:(id)arg1;
- (id)tgtSlide;
- (void)setTgtSlide:(id)arg1;
- (NSUInteger)textLength;
- (void)setTextLength:(NSUInteger)arg1;
- (BOOL)hasCharacterPropertyBulletIndex;
- (void)setHasCharacterPropertyBulletIndex:(BOOL)arg1;
- (NSUInteger)bulletIndex;
- (void)setBulletIndex:(NSUInteger)arg1;
- (void)setPlaceholderBulletStyles:(id)arg1;
- (void)setPlaceholderMacCharStyles:(id)arg1;
- (id)currentBulletStyle;
- (id)currentMacCharStyle;
- (void)setCurrentSlideId:(NSUInteger)arg1 textType:(NSInteger)arg2;
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;
- (void)addBulletBlip:(id)arg1;
- (id)bulletBlipAtIndex:(NSUInteger)arg1;
- (NSUInteger)bulletBlipCount;

@end
