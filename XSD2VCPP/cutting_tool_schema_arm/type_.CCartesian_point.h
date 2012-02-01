#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_point
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_point



namespace cutting_tool_schema_arm
{

class CCartesian_point : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCartesian_point(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCartesian_point(CCartesian_point const& init);
	void operator=(CCartesian_point const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCartesian_point); }

	MemberAttribute<string_type,_altova_mi_altova_CCartesian_point_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CCartesian_point_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CCoordinatesType, _altova_mi_altova_CCartesian_point_altova_Coordinates> Coordinates;
	struct Coordinates { typedef Iterator<CCoordinatesType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_point
