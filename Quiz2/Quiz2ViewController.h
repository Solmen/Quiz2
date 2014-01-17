//
//  Quiz2ViewController.h
//  Quiz2
//
//  Created by Samuel Tolkin on 1/17/14.
//  Copyright (c) 2014 Samuel Tolkin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Quiz2ViewController : UIViewController
- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *questionLabel;
@property (weak, nonatomic) IBOutlet UILabel *answerLabel;

@end
