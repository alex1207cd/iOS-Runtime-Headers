/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GMMStreetViewMetadata, NSString, GMMIncomingTile;



@interface GMMStreetViewResponse : GMMResponse <GMMReadWriteStream>
{
    NSString *_panoId;
    GMMStreetViewMetadata *_metadata;
    GMMIncomingTile *_responseTiles;
    NSString *_signature;
    BOOL _throttled;
    BOOL _hasThrottled;
}

@property(readonly) BOOL hasPanoId;
@property(readonly) BOOL hasMetadata;
@property(readonly) BOOL hasResponseTiles;
@property(readonly) BOOL hasSignature;
@property BOOL hasThrottled; /* unknown property attribute: V_hasThrottled */
@property BOOL throttled; /* unknown property attribute: V_throttled */
@property(retain) NSString *signature; /* unknown property attribute: V_signature */
@property(retain) GMMIncomingTile *responseTiles; /* unknown property attribute: V_responseTiles */
@property(retain) GMMStreetViewMetadata *metadata; /* unknown property attribute: V_metadata */
@property(retain) NSString *panoId; /* unknown property attribute: V_panoId */


- (id)init;
- (void)dealloc;
- (void)setThrottled:(BOOL)arg1;
- (BOOL)hasPanoId;
- (BOOL)hasMetadata;
- (BOOL)hasResponseTiles;
- (BOOL)hasSignature;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1 tillEnd:(BOOL)arg2;
     /* Encoded args for previous method: c16@0:4^{InputDataStream=*IIBB}8c12 */

- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */

- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;
- (BOOL)hasThrottled;
- (void)setHasThrottled:(BOOL)arg1;
- (BOOL)throttled;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)responseTiles;
- (void)setResponseTiles:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (id)panoId;
- (void)setPanoId:(id)arg1;
- (id)description;

@end
