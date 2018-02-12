//
//  Programmer.m
//  Protocolo
//
//  Created by Eduardo Vital Alencar Cunha on 28/03/17.
//  Copyright © 2017 Vital. All rights reserved.
//

#import "Programmer.h"

@implementation Programmer

@synthesize name;
@synthesize age;
@synthesize gender;

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.age = 20;
        self.name = @"Eduardo";
        self.gender = @"Masculino";
        self.salary = @14000.00;
    }
    return self;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"%@ tem %ld anos, é do sexo %@.Seu salário é de U$$ %@", self.name, self.age, self.gender, self.salary];
}

#pragma mark Person Methods

- (void)eat {

}

- (void)code {

}

- (void)playVideoGameWithGame:(Game *)game {
    NSLog(@"%@", game.name);
}

- (void) sleep {
    
}

@end
