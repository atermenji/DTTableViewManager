//
//  ViewController.h
//  TableViewFactory
//
//  Created by Denys Telezhkin on 9/28/12.
//  Copyright (c) 2012 Denys Telezhkin. All rights reserved.
//

#import "DTTableViewManager.h"

@interface ExampleTableViewController : UIViewController <UITableViewDelegate,
                                                          UITableViewDataSource,
                                                          DTTableViewCellCreation>
{
}

@property (nonatomic,strong) IBOutlet UITableView * tableView;
@end
