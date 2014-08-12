//
//  ViewController.h
//  Lexiday
//
//  Created by Michael Styve on 7/16/14.
//  Copyright (c) 2014 Michael Styve. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutletCollection(UITextField) NSString *txtemail;
@property (strong, nonatomic) IBOutletCollection(UITextField) NSArray *txtpswd;
- (IBAction)loginClicked:(id)sender;
@end
