/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */



public enum ModuleEnum {
  City_NYC(0),
  City_MPK(1),
  City_SEA(2),
  City_LON(3),
  Company_FACEBOOK(0),
  Company_WHATSAPP(1),
  Company_OCULUS(2),
  Company_INSTAGRAM(3);

  private final int mValue;
  private ModuleEnum(int value) {
    mValue = value;
  }
  public int getValue() {
    return mValue;
  }
}
