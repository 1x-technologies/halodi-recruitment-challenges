package simple;

import org.junit.Test;
import static org.junit.Assert.*;

public class GreeterTest {
    @Test
    public void testAppHasAGreeting() {
        Greeter greeter = new Greeter();
        assertNotNull("app should have a greeting", greeter.sayHello());
    }
}
