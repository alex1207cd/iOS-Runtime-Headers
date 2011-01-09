/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class MKAddressBookAddress;



@interface MKAddressBookSearchResult : MKSearchResult 
{
    MKAddressBookAddress *_address;
}


- (id)initWithSearchResult:(id)arg1;
- (id)initWithSearchResult:(id)arg1 address:(id)arg2;
- (id)initWithSearchResultStrippingName:(id)arg1 address:(id)arg2;
- (void)dealloc;
- (id)address;
- (id)name;
- (id)singleLineAddress;
- (id)singleLineAddressWithHomeCountry;
- (id)dictionaryRepresentation;
- (BOOL)isValid;
- (BOOL)looksLikeBusiness;

@end
