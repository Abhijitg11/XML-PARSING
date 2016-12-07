//
//  xmlTableViewController.h
//  xmlparsing
//
//  Created by Student on 04/11/16.
//  Copyright (c) 2016 Abhijit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface xmlTableViewController : UITableViewController<NSXMLParserDelegate>

@property (nonatomic,retain) NSMutableArray *plantarray;
@property (nonatomic,retain)NSXMLParser *saxparser;
@property (nonatomic,retain)NSMutableString *tempstring;





@end
