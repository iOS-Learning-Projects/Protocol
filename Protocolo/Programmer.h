//
//  Programmer.h
//  Protocolo
//
//  Created by Eduardo Vital Alencar Cunha on 28/03/17.
//  Copyright © 2017 Vital. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

@interface Programmer : NSObject <Person> // if needed: <Person, anotherProtocol, moreOne>

@property (nonatomic, assign) NSNumber *salary;

@end
