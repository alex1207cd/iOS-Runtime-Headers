/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISItemInfo, ISStorePage, NSString;



@interface ISItem : NSObject <NSCopying>
{
    ISStorePage *_page;
    NSString *_title;
    NSString *_unmodifiedTitle;
    ISItemInfo *_info;
    NSUInteger _type;
}

+ (struct CGSize { float x1; float x2; })imageSizeForFormat:(NSUInteger)arg1;
+ (id)_dictionaryForType:(NSUInteger)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)loadFromDictionary:(id)arg1 error:(id*)arg2;
- (BOOL)loadFromDictionary:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (id)page;
- (void)setPage:(id)arg1;
- (id)firstArtworkForFormat:(NSUInteger)arg1;
- (id)artworkForFormat:(NSUInteger)arg1;
- (id)copyTitlesForPurchase;
- (id)info;
- (BOOL)isPurchaseable;
- (BOOL)isPurchased;
- (id)pageURL;
- (NSUInteger)pageURLType;
- (id)externalDownload;
- (id)purchaseDescriptor;
- (id)title;
- (NSUInteger)type;
- (id)unmodifiedTitle;
- (id)uniqueIdentifier;
- (void)setType:(NSUInteger)arg1;

@end
