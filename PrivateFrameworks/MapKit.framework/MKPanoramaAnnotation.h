/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class NSString, UIColor;



@interface MKPanoramaAnnotation : NSObject 
{
    NSInteger _type;
    NSString *_panoramaID;
    NSString *_text;
    NSString *_streetRange;
    double _yaw;
    UIColor *_roadOverlayColor;
}

@property(readonly) UIColor *roadOverlayColor; /* unknown property attribute: V_roadOverlayColor */
@property(readonly) double yaw; /* unknown property attribute: V_yaw */
@property(readonly) NSString *streetRange; /* unknown property attribute: V_streetRange */
@property(readonly) NSString *text; /* unknown property attribute: V_text */
@property(readonly) NSString *panoramaID; /* unknown property attribute: V_panoramaID */
@property NSInteger type; /* unknown property attribute: V_type */


- (id)initWithLink:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)roadOverlayColor;
- (double)yaw;
- (id)streetRange;
- (id)text;
- (id)panoramaID;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;

@end
