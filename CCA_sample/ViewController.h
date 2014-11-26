//
//  ViewController.h
//  CCA_sample
//
//  Created by ueno on 2014/11/25.
//  Copyright (c) 2014年 GEND. co.ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface ViewController :UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>



@property (weak, nonatomic) IBOutlet UIImageView *mainImageView;

- (IBAction)CallCamera:(id)sender;
- (IBAction)CallPhotoLibrary:(id)sender;

@end

