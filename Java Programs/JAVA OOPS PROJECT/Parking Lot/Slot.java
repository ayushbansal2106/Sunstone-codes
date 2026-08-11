public class Slot {
    private boolean isOccupied;
    private int slotNumber;
    private int levelNumber;

    public Slot(int levelNumber, int slotNumber) {
        this.levelNumber = levelNumber;
        this.slotNumber = slotNumber;
        this.isOccupied = false;
    }

    public boolean isOccupied() {
        return isOccupied;
    }

    public void occupy() {
        this.isOccupied = true;
    }

    public void vacate() {
        this.isOccupied = false;
    }

    public int getSlotNumber() {
        return slotNumber;
    }

    public int getLevelNumber() {
        return levelNumber;
    }

    @Override
    public String toString() {
        return "Level " + levelNumber + ", Slot " + slotNumber;
    }
}
