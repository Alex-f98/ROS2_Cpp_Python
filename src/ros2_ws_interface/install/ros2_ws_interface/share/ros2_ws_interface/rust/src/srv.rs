

#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GradePointAverage_Request {
    pub grade_1: i64,
    pub grade_2: i64,
    pub grade_3: i64,
}



impl Default for GradePointAverage_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GradePointAverage_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GradePointAverage_Request {
  type RmwMsg = crate::srv::rmw::GradePointAverage_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        grade_1: msg.grade_1,
        grade_2: msg.grade_2,
        grade_3: msg.grade_3,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      grade_1: msg.grade_1,
      grade_2: msg.grade_2,
      grade_3: msg.grade_3,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      grade_1: msg.grade_1,
      grade_2: msg.grade_2,
      grade_3: msg.grade_3,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GradePointAverage_Response {
    pub gpa: f64,
}



impl Default for GradePointAverage_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GradePointAverage_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GradePointAverage_Response {
  type RmwMsg = crate::srv::rmw::GradePointAverage_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        gpa: msg.gpa,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      gpa: msg.gpa,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      gpa: msg.gpa,
    }
  }
}






#[link(name = "ros2_ws_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ros2_ws_interface__srv__GradePointAverage() -> *const std::os::raw::c_void;
}

// Corresponds to ros2_ws_interface__srv__GradePointAverage
pub struct GradePointAverage;

impl rosidl_runtime_rs::Service for GradePointAverage {
  type Request = crate::srv::GradePointAverage_Request;
  type Response = crate::srv::GradePointAverage_Response;

  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__ros2_ws_interface__srv__GradePointAverage() }
  }
}



pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "ros2_ws_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ros2_ws_interface__srv__GradePointAverage_Request() -> *const std::os::raw::c_void;
}

#[link(name = "ros2_ws_interface__rosidl_generator_c")]
extern "C" {
    fn ros2_ws_interface__srv__GradePointAverage_Request__init(msg: *mut GradePointAverage_Request) -> bool;
    fn ros2_ws_interface__srv__GradePointAverage_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GradePointAverage_Request>, size: usize) -> bool;
    fn ros2_ws_interface__srv__GradePointAverage_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GradePointAverage_Request>);
    fn ros2_ws_interface__srv__GradePointAverage_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GradePointAverage_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GradePointAverage_Request>) -> bool;
}

// Corresponds to ros2_ws_interface__srv__GradePointAverage_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GradePointAverage_Request {
    pub grade_1: i64,
    pub grade_2: i64,
    pub grade_3: i64,
}



impl Default for GradePointAverage_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ros2_ws_interface__srv__GradePointAverage_Request__init(&mut msg as *mut _) {
        panic!("Call to ros2_ws_interface__srv__GradePointAverage_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GradePointAverage_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_ws_interface__srv__GradePointAverage_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_ws_interface__srv__GradePointAverage_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_ws_interface__srv__GradePointAverage_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GradePointAverage_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GradePointAverage_Request where Self: Sized {
  const TYPE_NAME: &'static str = "ros2_ws_interface/srv/GradePointAverage_Request";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ros2_ws_interface__srv__GradePointAverage_Request() }
  }
}


#[link(name = "ros2_ws_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ros2_ws_interface__srv__GradePointAverage_Response() -> *const std::os::raw::c_void;
}

#[link(name = "ros2_ws_interface__rosidl_generator_c")]
extern "C" {
    fn ros2_ws_interface__srv__GradePointAverage_Response__init(msg: *mut GradePointAverage_Response) -> bool;
    fn ros2_ws_interface__srv__GradePointAverage_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GradePointAverage_Response>, size: usize) -> bool;
    fn ros2_ws_interface__srv__GradePointAverage_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GradePointAverage_Response>);
    fn ros2_ws_interface__srv__GradePointAverage_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GradePointAverage_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GradePointAverage_Response>) -> bool;
}

// Corresponds to ros2_ws_interface__srv__GradePointAverage_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GradePointAverage_Response {
    pub gpa: f64,
}



impl Default for GradePointAverage_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ros2_ws_interface__srv__GradePointAverage_Response__init(&mut msg as *mut _) {
        panic!("Call to ros2_ws_interface__srv__GradePointAverage_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GradePointAverage_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_ws_interface__srv__GradePointAverage_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_ws_interface__srv__GradePointAverage_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_ws_interface__srv__GradePointAverage_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GradePointAverage_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GradePointAverage_Response where Self: Sized {
  const TYPE_NAME: &'static str = "ros2_ws_interface/srv/GradePointAverage_Response";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ros2_ws_interface__srv__GradePointAverage_Response() }
  }
}






  #[link(name = "ros2_ws_interface__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__ros2_ws_interface__srv__GradePointAverage() -> *const std::os::raw::c_void;
  }

  // Corresponds to ros2_ws_interface__srv__GradePointAverage
  pub struct GradePointAverage;

  impl rosidl_runtime_rs::Service for GradePointAverage {
    type Request = crate::srv::rmw::GradePointAverage_Request;
    type Response = crate::srv::rmw::GradePointAverage_Response;

    fn get_type_support() -> *const std::os::raw::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__ros2_ws_interface__srv__GradePointAverage() }
    }
  }



}  // mod rmw
