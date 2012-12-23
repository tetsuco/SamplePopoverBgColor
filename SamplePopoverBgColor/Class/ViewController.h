//
//  ViewController.h
//  SamplePopoverBgColor
//
//  Created by  on 12/01/29.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableViewController.h"

@interface ViewController : UIViewController <TableViewControllerDelegate, UIPopoverControllerDelegate> {
    UIButton *btn;
}

@property (strong, nonatomic) UIPopoverController *popOver;


/* メソッド */

- (void)btnAction:(UIButton*)sender;


/* Delegateメソッド */

- (void)tableViewControllerDelegateDidFinish:(NSString*)getData;


@end