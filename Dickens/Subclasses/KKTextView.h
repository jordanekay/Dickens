//
//  KKTextView.h
//  Dickens
//
//  Created by Kolin Krewinkel on 3/17/13.
//  Copyright (c) 2013 Handcrafted. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KKTextView : UITextView

#pragma mark - Polishment Properties

@property (nonatomic) BOOL polishTextAutomatically;

#pragma mark - Polish Methods

- (void)setText:(NSString *)text polish:(BOOL)polish;

@end
