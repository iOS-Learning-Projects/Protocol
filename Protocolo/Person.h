//
//  Person.h
//  Protocolo
//
//  Created by Eduardo Vital Alencar Cunha on 28/03/17.
//  Copyright © 2017 Vital. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Game.h"

@protocol Person <NSObject>

@property (nonatomic) NSString *name;
@property (nonatomic) NSInteger age;
@property (nonatomic) NSString *gender;

@optional
- (void)sleep;

@required
- (void)eat;
- (void)code;
- (void)playVideoGameWithGame:(Game *)game;

@end
