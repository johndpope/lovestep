//
//  Loop.h
//  lovestep
//
//  Created by Raymond Kennedy on 11/20/14.
//  Copyright (c) 2014 Raymond kennedy. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Instrument;

static const NSInteger kHeight = 12;

@interface Loop : NSObject

@property (nonatomic) NSInteger length;
@property (nonatomic, strong) NSMutableArray *grid;
@property (nonatomic, strong) NSString *name;
@property (nonatomic) NSInteger user;
@property (nonatomic) Instrument *instrument;

- (id)initWithLength:(NSInteger)length name:(NSString *)name instrument:(Instrument *)instrument user:(NSInteger)user;
- (void)procedurallyGenerateGrid;

@end
