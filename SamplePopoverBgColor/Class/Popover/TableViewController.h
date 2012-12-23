//
//  TableViewController.h
//  SamplePopoverBgColor
//
//  Created by  on 12/01/29.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TableViewControllerDelegate;

@interface TableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    
}

@property (nonatomic, assign) id <TableViewControllerDelegate> delegate;


/* メソッド */

- (void)rightBarBtnItmAction:(UIButton*)sender;


@end

//--------------------------------------------------------------//

@protocol TableViewControllerDelegate


/* メソッド*/

- (void)tableViewControllerDelegateDidFinish:(NSString*)getData;

@end
