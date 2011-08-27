//
//  TDSidebar.h
//  TextMateDBGp
//
//	Copyright (c) Jon Lee.
//
//	Permission is hereby granted, free of charge, to any person
//	obtaining a copy of this software and associated documentation
//	files (the "Software"), to deal in the Software without
//	restriction, including without limitation the rights to use,
//	copy, modify, merge, publish, distribute, sublicense, and/or sell
//	copies of the Software, and to permit persons to whom the
//	Software is furnished to do so, subject to the following
//	conditions:
//
//	The above copyright notice and this permission notice shall be
//	included in all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//	EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//	OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//	NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//	WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//	OTHER DEALINGS IN THE SOFTWARE.
//

@class TDBookmarksView;
@class TDDebugView;
@class TDProject;
@class TDProjectNavigatorView;

@interface TDSidebar : NSView <NSMatrixDelegate> {
@private
  IBOutlet NSMatrix* toolbar;
  IBOutlet NSView* contentView;
  
  TDProjectNavigatorView* _navigatorView;
  TDDebugView* _debugView;
  TDBookmarksView* _bookmarksView;
  TDProject* _project;
}

@property (assign) NSMatrix* toolbar;
@property (assign) NSView* contentView;
@property (nonatomic,retain) IBOutlet TDProjectNavigatorView* navigatorView;
@property (nonatomic,retain) IBOutlet TDDebugView* debugView;
@property (nonatomic,retain) IBOutlet TDBookmarksView* bookmarksView;
@property (nonatomic,readonly) TDProject* project;

- (IBAction)toolbarClicked:(id)sender;
- (int)selectedView;
- (void)selectView:(int)viewIndex;
@end
