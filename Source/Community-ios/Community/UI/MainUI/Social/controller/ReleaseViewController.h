//
//  ReleaseViewController.h
//  Community
//
//  Created by 永生刘 on 14/10/16.
//  Copyright (c) 2014年 QiMENG. All rights reserved.
//

#import "QMViewController.h"
#import <SZTextView.h>
@interface ReleaseViewController : QMViewController {
    
    
    __weak IBOutlet UITextField *titleTF;
    
    __weak IBOutlet SZTextView *contentTF;
    
}

@end
