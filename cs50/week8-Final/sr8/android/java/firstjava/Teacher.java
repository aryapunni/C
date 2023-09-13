import java.util.*;

public class Teacher{

  // An interface is used to write what are the functonalities
  // should be done by a class.
  //example: there are several types of list classes
  //but all of them must satisfy operations such as
  //push pull etc. so we can define an interface in each class
  //with these methods so that if any of the list class lacks such methods
  //an error will be given by the compiler
  public interface Teachers{

    public void teach();
  }
}
