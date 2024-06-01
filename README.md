# Movable_inherits_MovablePoint

Create class Movable (abstracted) which contains only the following:
- moveUp() => pure virtual method to achieve abstraction
- moveDown() => pure virtual method to achieve abstraction
- moveLeft() => pure virtual method to achieve abstraction
- moveRight() => pure virtual method to achieve abstraction

Create class MovablePoint which inherits from Movable class , and contain
following attributes :
- int x
- int y
- int xSpeed
- int ySpeed
- Default & parameterized constructors
- Implement the above methods as this :
o moveUp() => increase the value of y by ySpeed
o moveDown() => decrease the value of y by ySpeed
o moveLeft() => decrease the value of x by xSpeed
o moveRight() => increase the value of x by xSpeed

your main could be as this :
int main()
{ //x y x_s y_s
MovablePoint m(5, 5, 2, 3);
m.moveUp(); // x = 5, y = 8
m.moveLeft(); // x = 3, y = 8
m.display_info();
}
