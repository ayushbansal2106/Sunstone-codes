public class Spot {
    private boolean available = true;
    private Level level;

    public Spot(Level level) {
        this.level = level;
    }

    public boolean isAvailable() {
        return available;
    }

    public void takeSpot() {
        available = false;
    }

    public void clearSpot() {
        available = true;
    }

    public Level getLevel() {
        return level;
    }
}
