//
//  PSAlarmAlertController.h
//  Pester
//
//  Created by Nicholas Riley on Sat Oct 26 2002.
//  Copyright (c) 2002 Nicholas Riley. All rights reserved.
//

#import <AppKit/AppKit.h>
#import "PSAlarm.h"

extern NSString * const PSAlarmAlertStopNotification;

@interface PSAlarmAlertController : NSObject {

}

+ (PSAlarmAlertController *)controllerWithTimerExpiredNotification:(NSNotification *)notification;

+ (IBAction)stopAlerts:(id)sender;

- (id)initWithAlarm:(PSAlarm *)alarm;

@end
