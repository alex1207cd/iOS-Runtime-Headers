/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDResultSnippet : PBCodable <NSCopying> {
    NSString *_category;
    GEOLatLng *_center;
    unsigned int _distanceDisplayThreshold;
    struct { 
        unsigned int distanceDisplayThreshold : 1; 
    } _has;
    NSString *_locationString;
    NSString *_name;
    GEOPDRating *_priceRange;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) unsigned int distanceDisplayThreshold;
@property (nonatomic, readonly) BOOL hasCategory;
@property (nonatomic, readonly) BOOL hasCenter;
@property (nonatomic) BOOL hasDistanceDisplayThreshold;
@property (nonatomic, readonly) BOOL hasLocationString;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, readonly) BOOL hasPriceRange;
@property (nonatomic, retain) NSString *locationString;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) GEOPDRating *priceRange;

+ (id)resultSnippetForPlaceData:(id)arg1;

- (id)category;
- (id)center;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distanceDisplayThreshold;
- (BOOL)hasCategory;
- (BOOL)hasCenter;
- (BOOL)hasDistanceDisplayThreshold;
- (BOOL)hasLocationString;
- (BOOL)hasName;
- (BOOL)hasPriceRange;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationString;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)priceRange;
- (BOOL)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setDistanceDisplayThreshold:(unsigned int)arg1;
- (void)setHasDistanceDisplayThreshold:(BOOL)arg1;
- (void)setLocationString:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPriceRange:(id)arg1;
- (void)writeTo:(id)arg1;

@end
