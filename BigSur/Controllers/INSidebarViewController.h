//
//  INSidebarViewController.h
//  BigSur
//
//  Created by Ben Gotow on 5/13/14.
//  Copyright (c) 2014 Inbox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface INSidebarViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, INModelProviderDelegate>
{
    NSArray * _tableSectionData;
    NSString * _tableViewSelectedItemName;
}

@property (nonatomic, weak) IBOutlet UITableView * tableView;
@property (nonatomic, strong) INModelProvider * tagProvider;

- (void)refresh;
- (void)selectItemWithName:(NSString*)name;

- (IBAction)unauthenticateTapped:(id)sender;
- (IBAction)syncStatusTapped:(id)sender;

@end
