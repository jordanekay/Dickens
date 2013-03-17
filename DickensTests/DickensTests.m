//
//  DickensTests.m
//  DickensTests
//
//  Created by Kolin Krewinkel on 3/17/13.
//  Copyright (c) 2013 Handcrafted. All rights reserved.
//

#import "DickensTests.h"
#import "NSString+KKPolishing.h"

NSString *const DickensTestMessyString = @"This string contains \"dumb double quotes.\" As well, it has 'dumb single quotes.'";
NSString *const DickensTestPolishedString = @"This string contains “dumb double quotes.” As well, it has ‘dumb single quotes.’";

@implementation DickensTests

- (void)setUp
{
    [super setUp];
    
    // Set-up code here.
}

- (void)tearDown
{
    // Tear-down code here.
    
    [super tearDown];
}

- (void)testPolish
{
    STAssertTrue([DickensTestMessyString.polishedString isEqualToString:DickensTestPolishedString], @"Polish failed.");
}

@end
