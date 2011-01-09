/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */



@interface WebPDFView : WAKView <WebDocumentView, WebDocumentRepresentation>
{
    BOOL dataSourceHasBeenSet;
    struct CGPDFDocument { } *_PDFDocument;
    struct CGRect { struct CGPoint { 
            float x; 
            float y; 
        } x1; struct CGSize { 
            float width; 
            float height; 
        } x2; } *_pageRects;
}

+ (id)supportedMIMETypes;
+ (struct CGColor { }*)shadowColor;
+ (struct CGColor { }*)backgroundColor;

- (void)dealloc;
- (void)drawPage:(struct CGPDFPage { }*)arg1;
- (id)_pagesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)layout;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)_computePageRects;
- (void)_checkPDFTitle;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (BOOL)canProvideDocumentSource;
- (id)documentSource;
- (id)title;
- (NSUInteger)pageNumberForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSUInteger)totalPages;

@end
