#import "ABKCard+InnerMethod.h"

@interface ABKCardCaptionedMessage : ABKCard <NSCoding>

/*
 * This property is the URL of the card's image.
 */
@property (nonatomic, copy) NSString *image;
/*
 * The title text for the card.
 */
@property (nonatomic, copy) NSString *title;
/*
 * The descriptioin text for the card.
 */
@property (nonatomic, copy) NSString *description;

//Optional:
/*
 * The URL that will be opened after the card is clicked on. It can be a http(s) URL or a protocol URL.
 */
@property (nonatomic, copy) NSString *url;

/*
 * The link text for the property url, like @"blog.appboy.com". It can be displayed on the card's
 * UI to indicate the action/direction of clicking on the card.
 */
@property (nonatomic, copy) NSString *domain;

@end
