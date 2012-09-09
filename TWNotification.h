//
//  TWNotification.h
//  TWNotification
//
//  Created by Pigi Galdi on 09/09/12.
//  Copyright (c) 2012 Pigi Galdi. All rights reserved.
//

#import <UIKit/UIKit.h>

enum {
	TWNotificationStyleSuccess  = 0,
	TWNotificationStyleMessage  = 1,
    TWNotificationStyleError    = 2,
};
typedef NSUInteger TWNotificationStyle;

@interface TWNotification : UIView {
@private
    
    // Declare UILabel for notification text.
    UILabel *_notificationText;
}
// Init mothods.
- (id)initWithTitle:(NSString*)twTitle message:(NSString*)twMessage withStyle:(TWNotificationStyle)twStyle inView:(UIView*)userView hideAfter:(float)twTimer;
- (void)showAndHideAfter:(float)timeToHide;
- (void)close;
@end
