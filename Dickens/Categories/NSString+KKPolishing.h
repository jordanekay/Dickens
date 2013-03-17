//
//  NSString+KKPolishing.h
//  Dickens
//
//  Created by Kolin Krewinkel on 3/17/13.
//  Copyright (c) 2013 Handcrafted. All rights reserved.
//

typedef void (^KKPolishingStringCompletionBlock)(NSString *polishedString);

extern NSString *const KKCharacterLeftDoubleQuotationMark;
extern NSString *const KKCharacterRightDoubleQuotationMark;

extern NSString *const KKCharacterLeftSingleQuotationMark;
extern NSString *const KKCharacterRightSingleQuotationMark;

@interface NSString (KKPolishing)

#pragma mark - These should be in NSString by default.

- (NSRange)endToEndRange;

#pragma mark - Polish Methods

- (NSString *)polishedString;

@end
