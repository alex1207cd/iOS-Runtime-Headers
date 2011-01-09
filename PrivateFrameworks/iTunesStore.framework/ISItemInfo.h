/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray, NSArray, NSString, NSMutableDictionary, ISStorePage;



@interface ISItemInfo : NSObject <NSCopying>
{
    NSMutableArray *_artworkGroups;
    NSString *_fallbackStoreOfferKey;
    NSInteger _mediaType;
    unsigned long _identifier;
    ISStorePage *_page;
    NSArray *_pageURLs;
    NSArray *_pageURLTypes;
    NSMutableDictionary *_storeOffers;
    NSString *_uuid;
}


- (id)initWithPage:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_loadArtworkFromArray:(id)arg1;
- (BOOL)loadFromDictionary:(id)arg1 dataSource:(id)arg2;
- (void)_addValues:(struct __CFDictionary { }*)arg1 toArray:(id)arg2;
- (id)artworkForFormat:(NSUInteger)arg1;
- (id)externalDownload;
- (unsigned long)identifier;
- (id)pageURLs;
- (id)pageURLTypes;
- (id)purchaseDescriptor;
- (id)uniqueIdentifier;
- (id)activeStoreOffer;
- (id)activeStoreOfferKey;
- (id)buyParameters;
- (long long)downloadFileSize;
- (long long)expandedDownloadFileSize;
- (NSInteger)mediaType;
- (BOOL)isPurchaseable;
- (id)priceDisplay;
- (void)setStoreOffer:(id)arg1 forKey:(id)arg2;
- (id)storeOfferForKey:(id)arg1;
- (id)bestGuessPageTitle;
- (BOOL)checkPurchaseConstraints:(id*)arg1;
- (NSUInteger)downloadType;
- (NSUInteger)pendingPurchaseType;
- (id)purchaseTitles;
- (NSUInteger)representedItemCount;

@end
