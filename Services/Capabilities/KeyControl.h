//
//  KeyControl.h
//  Connect SDK
//
//  Created by Jeremy White on 1/3/14.
//  Copyright (c) 2014 LG Electronics.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "Capability.h"

#define kKeyControlAny @"KeyControl.Any"

#define kKeyControlUp @"KeyControl.Up"
#define kKeyControlDown @"KeyControl.Down"
#define kKeyControlLeft @"KeyControl.Left"
#define kKeyControlRight @"KeyControl.Right"
#define kKeyControlOK @"KeyControl.OK"
#define kKeyControlBack @"KeyControl.Back"
#define kKeyControlHome @"KeyControl.Home"
#define kKeyControlSendKeyCode @"KeyControl.Send.KeyCode"

#define kKeyControlCapabilities @[\
    kKeyControlUp,\
    kKeyControlDown,\
    kKeyControlLeft,\
    kKeyControlRight,\
    kKeyControlOK,\
    kKeyControlBack,\
    kKeyControlHome,\
    kKeyControlSendKeyCode\
]

@protocol KeyControl <NSObject>

- (id <KeyControl>)keyControl;

- (CapabilityPriorityLevel)keyControlPriority;

- (void)upWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)downWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)leftWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)rightWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)okWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)backWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)homeWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)num0WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)num1WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)num2WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)num3WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)num4WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)num5WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)num6WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)num7WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)num8WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)num9WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)numRedWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)numGreenWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)numYellowWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)numBlueWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)numGuideWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)dashWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)infoWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)menuWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)exitWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void)replayWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;


- (void)sendKeyCode:(NSUInteger)keyCode success:(SuccessBlock)success failure:(FailureBlock)failure;

@end
